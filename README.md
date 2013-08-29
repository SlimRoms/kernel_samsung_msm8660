Marla & Moretz Kernels for CM10.2
===================

Branches Supported in this Repository
-------------------

**Marla** - CM10.2 based kernel for the Samsung Skyrocket, Hercules & 
Exhilarate devices.  This branch is intended to be very close to
stock with specific modifications to improve performance and
battery consumption vs. stock.  This is intended to be a flash
and forget kernel.  There is no need for users to screw with 
anything to get optimal results.

**Moretz** - CM10.2 based kernel for the Samsung Skyrocket, Hercules & 
Exhilarate devices.  This branch is the 'hot rod' kernel, it contains
over clocked CPU frequencies, a bunch of different schedulers and
governors, etc.  It is intended for the tweakers.

Terms of Use
-------------------

No warranty implied or written.  You use this source at your own risk.

This is free useable, forkable, kangable, whatever.  However, you **MUST**
keep original code attributions intact when cherry-picking, forking, etc.

You do not have to ask permission to use the Moretz & Marla code branches.
What I do ask is that you at least send me a link to your distribution or
forked repository in github/bitbucket.  Lastly, please give credit to
the following people & groups in your distribution:

	Team Chopsticks
	CyanogenMod
	Car vs Driver
    elbermu
    
How to pull this into your CM10.2 build.
--------------------

To use this kernel in your Samsung Hercules, Skyrocket or Exhilarate builds for 
CM10.2, you will need to edit your roomservice.xml (or local_manifest.xml) and 
add the following:

  <remote  name="bitbucket"
          fetch="ssh://git@bitbucket.org" />
          
          <project 
            name="carvsdriver/android_kernel_samsung_msm8660-common" 
            path="kernel/samsung/msm8660-common" 
            remote="bitbucket" 
            revision="moretz" />
            
Change your revision to either moretz or marla depending on which one you 
want to use.

Now, follow the instructions located at the link below for the init.d
helper scripts that go along with both kernel variants:

https://bitbucket.org/carvsdriver/vendor_moretz-kernel

Finally, you will need to remove the stock kernel from your manifest and 
cm.depdenencies script.
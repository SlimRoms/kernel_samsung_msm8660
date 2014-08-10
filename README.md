"Mo" Kernel for Slim - README adapted from the forked, original Moretz branch.
======================================

This kernel is based on the CM-11.0 versions of "Moretz" and "Marla".

The "Mo" kk4.4 branch is the default, and will be supported as time permits. 

Please do not request individual, flashable kernel zip files.  You can compile this yourself as needed if you like...


Terms of Use
-------------------

No warranty implied or written.  You use this source at your own risk.

This is free useable, forkable, kangable, whatever.  However, you **MUST** keep original code attributions intact when cherry-picking, forking, etc.

You do not have to ask permission to use this, however, please send me a link to your distribution or forked repository in github/bitbucket.  Lastly, please give credit to the following people & groups in your distribution:

	Team Chopsticks
	CyanogenMod
	NoSpamDan
	Wantowan2
	Car vs Driver
	elbermu


Change requests and bug fixes.
--------------------

For any bugs or changes, please submit pull requests.  They will be reviewed as necessary.

   
How to use this in your SlimKat build.
--------------------

This kernel has been configured to be the default in the Skyrocket and Hercules SlimKat slim.dependencies files.  No modifications should be necessary to these device trees in order to use it.  If you want to build with a different kernel, then you need to add the following to your .repo/local_manifests/slim_manifest.xml file:

				<remove-project name="SlimRoms/kernel_samsung_msm8660" />
				<project name="(your kernel repo)" path="kernel/samsung/msm8660" remote="(your repo host)" revision="(your revision)" />
				
This will remove the native one when synced up and pull yours in without needing to modify the slim.dependencies file.


MPDecision binary.
--------------------
Within the device_samsung_msm8660-common repo, there is a binary included to automatically handle selection of either the built-in mpdecision in "Mo" (/sys/kernel/msm_mpdecision/conf/), or the one included by default in the ROM (/system/bin/mpdecision).  No modification should be needed to use a different kernel in your SlimKat build, should you choose to do so.

Enjoy!

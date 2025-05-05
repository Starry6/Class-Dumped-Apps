@interface CNMemojiMetadataUtilities : NSObject
+ (id)os_log;
+ (id)poseConfigurationForData:withAvatarRecord:;
+ (id)avatarRecordForIdentifier:;
+ (id)dataForPoseConfiguration:;
+ (id)memojiMetadataDataForAvatarRecord:poseConfiguration:backgroundColorDescription:cropTransform:;
+ (id)memojiMetadataFromData:;
+ (id)memojiMetadataDataForAvatarRecord:poseConfiguration:backgroundColorDescription:;
+ (id)memojiMetadataDataForAvatarRecordIdentifier:poseConfigurationData:backgroundColorDescription:;
+ (id)dataForMemojiMetadata:;
+ (id)dataForMemojiMetadata:backgroundColorDescription:cropTransform:;
+ (id)memojiMetadataDataForAvatarRecordIdentifier:poseConfigurationData:backgroundColorDescription:cropTransform:;
+ (id)stickerConfigurationForAvatarRecord:stickerName:pose:;
+ (id)stickerConfigurationForAvatarRecord:stickerName:stickerPack:;
+ (id)physicsStatesDictionaryRepresentationForPose:;
@end

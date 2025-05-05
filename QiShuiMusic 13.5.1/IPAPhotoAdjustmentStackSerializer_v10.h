@interface IPAPhotoAdjustmentStackSerializer_v10 : IPAPhotoAdjustmentStackSerializer
- (id)dataFromArchive:error:;
- (id)archiveFromData:error:;
- (id)dataFromPhotoAdjustmentStack:error:;
- (id)photoAdjustmentStackFromData:error:;
- (id)photoAdjustmentFromArchive:error:;
@end

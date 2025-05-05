@interface IPAVideoAdjustmentStackSerializer_v10 : IPAVideoAdjustmentStackSerializer
- (id)dataFromArchive:error:;
- (id)archiveFromData:error:;
- (id)dataFromVideoAdjustmentStack:error:;
- (id)videoAdjustmentStackFromData:error:;
- (id)videoAdjustmentFromArchive:error:;
@end

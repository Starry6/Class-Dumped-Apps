@interface IPAPhotoAdjustmentStackSerializer : IPAAdjustmentStackSerializer
- (id)_dataFromAdjustmentStack:error:;
- (id)_adjustmentStackFromData:error:;
- (id)dataFromPhotoAdjustmentStack:error:;
- (id)photoAdjustmentStackFromData:error:;
@end

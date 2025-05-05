@interface MLNNLayerComputeUnitSelectionUtils : NSObject
+ (id)getNetJson:error:;
+ (id)getLayerTypes:error:;
+ (id)getLayerHints:error:;
+ (BOOL)updateHints:hints:error:;
+ (BOOL)undoLastHintUpdate:error:;
@end

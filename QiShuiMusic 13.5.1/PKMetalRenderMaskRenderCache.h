@interface PKMetalRenderMaskRenderCache : PKMetalStrokeRenderCache
@property (nonatomic) NSUUID strokeDataUUID;
- (void).cxx_destruct;
- (id)initWithInk:strokeDataUUID:;
- (id)strokeDataUUID;
@end

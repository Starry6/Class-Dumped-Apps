@interface IESLivePlayerSEIMetaInfo : NSObject
@property (nonatomic) q type;
@property (nonatomic) {IESLivePlayerSEIContourStruct=*i} contourStruct;
- (id)contourStruct;
- (void)setContourStruct:;
- (void)setType:;
- (long long)type;
@end

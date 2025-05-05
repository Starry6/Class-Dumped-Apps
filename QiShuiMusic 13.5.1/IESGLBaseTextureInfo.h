@interface IESGLBaseTextureInfo : NSObject
@property (nonatomic) I texId;
@property (nonatomic) r^f texCoords;
@property (nonatomic) {CGSize=dd} texSize;
@property (nonatomic) ^v rlInfo;
- (id)texSize;
- (id)rlInfo;
- (void)setRlInfo:;
- (void)setTexCoords:;
- (void)setTexId:;
- (void)setTexSize:;
- (id)texCoords;
- (unsigned int)texId;
+ (id)infoWithTexId:texCoords:texSize:;
+ (id)infoWithTexId:texCoords:texSize:rlInfo:;
@end

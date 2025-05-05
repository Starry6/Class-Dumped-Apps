@interface IESMMMVInputResouce : NSObject
@property (nonatomic) NSInteger rid;
@property (nonatomic) I textureID;
@property (nonatomic) ^v rlTexture;
@property (nonatomic) I width;
@property (nonatomic) I height;
- (id)rlTexture;
- (void)setRlTexture:;
- (void)setTextureID:;
- (id)init;
- (void)setWidth:;
- (unsigned int)height;
- (unsigned int)width;
- (void)setHeight:;
- (int)rid;
- (void)setRid:;
- (unsigned int)textureID;
@end

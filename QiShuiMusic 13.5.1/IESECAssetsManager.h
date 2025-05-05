@interface IESECAssetsManager : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) IESECBundle bundle;
@property (nonatomic) NSString assetsDirectory;
- (id)assetsDirectory;
- (id)getFilesOfType:inDirectory:recursive:;
- (id)initWithBundle:type:;
- (void)setAssetsDirectory:;
- (void)setType:;
- (id)bundle;
- (id)type;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setBundle:;
@end

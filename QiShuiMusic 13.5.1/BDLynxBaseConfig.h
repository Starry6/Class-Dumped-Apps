@interface BDLynxBaseConfig : NSObject
@property (nonatomic) NSString groupID;
@property (nonatomic) NSURL rootDirURL;
- (id)initWithDictionary:groupID:;
- (id)initWithDictionary:groupID:rootDir:;
- (id)rootDirURL;
- (void)setRootDirURL:;
- (void)updateWithDictionary:;
- (void)setGroupID:;
- (id)groupID;
- (void).cxx_destruct;
@end

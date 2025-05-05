@interface MSVFrameworkDescription : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSString version;
@property (nonatomic) BOOL root;
@property (nonatomic) BOOL debug;
- (id)uuid;
- (id)version;
- (BOOL)isRoot;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithName:uuid:version:root:debug:;
- (BOOL)isDebug;
@end

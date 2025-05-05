@interface MFFile : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL isPurgeable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (BOOL)isPurgeable;
- (id)initWithFile:account:;
- (id)initWithFile:isPurgeable:;
- (BOOL)markPurgeableWithError:;
- (void)setIsPurgeable:;
+ (id)log;
@end

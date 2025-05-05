@interface AFKMemoryDescriptorManager : NSObject
@property (nonatomic) Q regID;
@property (nonatomic) I connect;
- (id)initWithService:;
- (void)dealloc;
- (unsigned int)connect;
- (unsigned long long)regID;
+ (id)withService:;
@end

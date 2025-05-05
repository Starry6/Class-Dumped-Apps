@interface EFResource : NSObject
- (id)init;
- (void)holdResource;
- (void)unlock;
- (void)lock;
- (BOOL)returnResource;
@end

@interface HIDConnection : NSObject
@property (nonatomic) NSString uuid;
- (id)uuid;
- (void)getAuditToken:;
- (void)dealloc;
- (unsigned long long)_cfTypeID;
- (id)description;
@end

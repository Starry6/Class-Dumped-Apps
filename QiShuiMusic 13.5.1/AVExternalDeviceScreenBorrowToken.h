@interface AVExternalDeviceScreenBorrowToken : NSObject
@property (nonatomic) NSString client;
@property (nonatomic) NSString reason;
- (id)init;
- (void)dealloc;
- (id)reason;
- (id)client;
- (id)initWithExternalDevice:client:reason:;
@end

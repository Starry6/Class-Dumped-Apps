@interface CoreDAVSRVResourceRecord : NSObject
@property (nonatomic) NSString serviceString;
@property (nonatomic) NSNumber port;
@property (nonatomic) NSString target;
- (id)port;
- (void)setPort:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)description;
- (id)serviceString;
- (void)setServiceString:;
@end

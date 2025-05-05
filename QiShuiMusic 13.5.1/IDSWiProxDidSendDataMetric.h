@interface IDSWiProxDidSendDataMetric : NSObject
@property (nonatomic) Q resultCode;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)resultCode;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithResultCode:;
@end

@interface AMSXDDevice : NSObject
@property (nonatomic) NSDictionary JSONDictionary;
@property (nonatomic) NSString identifier;
@property (nonatomic) q type;
- (id)identifier;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithDeviceID:type:;
- (id)initWithJSONDictionary:;
- (id)JSONDictionary;
+ (BOOL)supportsSecureCoding;
+ (id)activePairedDevices;
+ (id)allPairedDevices;
+ (id)deviceFromIdentifier:;
@end

@interface MPMediaKitEntityPayloadTransformer : NSObject
@property (nonatomic) NSString transformedType;
@property (nonatomic) NSDictionary transformedPayload;
@property (nonatomic) NSMutableDictionary relationships;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString type;
@property (nonatomic) NSMutableDictionary attributes;
@property (nonatomic) NSMutableDictionary meta;
- (id)meta;
- (id)identifier;
- (id)attributes;
- (id)relationships;
- (id)type;
- (void).cxx_destruct;
- (id)transformedType;
- (id)initWithType:transformedType:;
- (id)transformedPayload;
- (void)setIdentifier:;
@end

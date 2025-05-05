@interface ISGenerationResponse : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSData validationToken;
@property (nonatomic) NSError error;
- (id)validationToken;
- (id)initWithError:;
- (id)uuid;
- (id)data;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:uuid:validationToken:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end

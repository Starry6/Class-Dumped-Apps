@interface ISGenerationRequest : NSObject
@property (nonatomic) ISConcreteIcon icon;
@property (nonatomic) ISImageDescriptor imageDescriptor;
@property (nonatomic) NSUUID lsDatabaseUUID;
@property (nonatomic) Q lsDatabaseSequenceNumber;
- (id)lsDatabaseUUID;
- (id)init;
- (id)generateImage;
- (id)_decorationRecipeKeyFromTypeIdentifier:position:;
- (id)icon;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)imageDescriptor;
- (void)setImageDescriptor:;
- (void)setLsDatabaseSequenceNumber:;
- (void)setIcon:;
- (void).cxx_destruct;
- (unsigned long long)lsDatabaseSequenceNumber;
- (id)generateImageReturningRecordIdentifiers:;
- (void)setLsDatabaseUUID:;
+ (BOOL)supportsSecureCoding;
@end

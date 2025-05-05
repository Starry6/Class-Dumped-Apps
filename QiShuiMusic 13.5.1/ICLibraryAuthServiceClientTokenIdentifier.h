@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject
@property (nonatomic) NSNumber DSID;
@property (nonatomic) NSString deviceGUID;
- (id)DSID;
- (id)initWithResponseDictionary:;
- (id)deviceGUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

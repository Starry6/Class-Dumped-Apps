@interface MIContainerToken : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString personaUniqueString;
@property (nonatomic) BOOL isTransient;
@property (nonatomic) Q containerClass;
@property (nonatomic) NSURL containerURL;
@property (nonatomic) NSData serializedContainerRepresentation;
- (id)personaUniqueString;
- (id)initWithContainer:;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)containerClass;
- (void).cxx_destruct;
- (BOOL)isTransient;
- (id)containerURL;
- (id)description;
- (id)serializedContainerRepresentation;
+ (BOOL)supportsSecureCoding;
@end

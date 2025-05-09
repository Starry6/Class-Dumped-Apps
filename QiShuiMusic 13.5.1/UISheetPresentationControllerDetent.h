@interface UISheetPresentationControllerDetent : NSObject
@property (nonatomic) q _type;
@property (nonatomic) @? _internalBlock;
@property (nonatomic) double _constant;
@property (nonatomic) BOOL _createdWithDeprecatedInitializer;
@property (nonatomic) NSString _identifier;
@property (nonatomic) NSString identifier;
- (double)_constant;
- (long long)_type;
- (double)resolvedValueInContext:;
- (void)_setIdentifier:;
- (id)_identifier;
- (double)_valueInResolutionContext:;
- (id)identifier;
- (BOOL)_createdWithDeprecatedInitializer;
- (id)initWithCoder:;
- (id)_internalBlock;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:identifier:internalBlock:constant:;
- (BOOL)isEqual:;
+ (id)largeDetent;
+ (id)mediumDetent;
+ (BOOL)supportsSecureCoding;
+ (id)_detentWithIdentifier:resolutionContextBlock:;
+ (id)_detentWithIdentifier:constant:;
+ (id)_detentWithContainerViewBlock:;
+ (id)customDetentWithIdentifier:resolver:;
+ (id)_detentWithResolutionContextBlock:;
+ (id)_detentWithIdentifier:containerViewBlock:;
@end

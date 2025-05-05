@interface CNCDAllContainersPredicate : CNPredicate
@property (nonatomic) BOOL includeDisabledContainers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)cn_topLevelFilter;
- (id)cn_persistenceFilterRequest;
- (id)initWithIncludeDisabledContainers:;
- (BOOL)includeDisabledContainers;
- (void)setIncludeDisabledContainers:;
+ (BOOL)supportsSecureCoding;
@end

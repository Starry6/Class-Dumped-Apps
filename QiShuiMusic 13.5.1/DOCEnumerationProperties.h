@interface DOCEnumerationProperties : NSObject
@property (nonatomic) NSNumber maximumNumberOfItems;
@property (nonatomic) NSArray tagIdentifiers;
@property (nonatomic) NSArray excludedContentTypes;
@property (nonatomic) NSArray allowedContentTypes;
@property (nonatomic) NSString hostIdentifier;
- (void)setAllowedContentTypes:;
- (id)allowedContentTypes;
- (id)maximumNumberOfItems;
- (void)setMaximumNumberOfItems:;
- (void).cxx_destruct;
- (id)hostIdentifier;
- (void)setHostIdentifier:;
- (id)tagIdentifiers;
- (id)initWithConfiguration:tags:;
- (id)initWithHostIdentifier:maximumNumberOfItems:allowedContentTypes:excludedContentTypes:tags:;
- (void)setTagIdentifiers:;
- (id)excludedContentTypes;
- (void)setExcludedContentTypes:;
@end

@interface SYAttributeSetActivityInfo : NSObject
@property (nonatomic) CSSearchableItemAttributeSet attributeSet;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSURL webpageURL;
@property (nonatomic) NSURL canonicalURL;
@property (nonatomic) NSString targetContentIdentifier;
@property (nonatomic) NSString persistentIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityType;
- (id)webpageURL;
- (id)persistentIdentifier;
- (void).cxx_destruct;
- (id)canonicalURL;
- (id)targetContentIdentifier;
- (id)attributeSet;
- (id)initWithAttributeSet:;
@end

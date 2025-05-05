@interface MSRichLinkGenerator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)createRichLinkWithURL:completionHandler:;
+ (id)linkGenerator;
+ (id)titleOpenLink;
+ (id)titleConvertToRichLink;
+ (id)titleConvertToPlainLink;
+ (BOOL)shouldUseRichLinks;
@end

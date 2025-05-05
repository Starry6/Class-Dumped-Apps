@interface WKPreviewAction : UIPreviewAction
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)identifier;
- (id)copyWithZone:;
+ (id)actionWithIdentifier:title:style:handler:;
@end

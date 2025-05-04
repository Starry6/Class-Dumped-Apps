@interface AWEProfileHeaderVSSignatureProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (Class)sectionViewModelClass;
+ (Class)sectionControllerClass;
+ (BOOL)shouldShowSectionWithContext:;
@end

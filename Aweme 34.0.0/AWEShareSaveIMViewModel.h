@interface AWEShareSaveIMViewModel : NSObject
@property (nonatomic) <AWEIMShareModelProtocol> model;
@property (nonatomic) NSString title;
@property (nonatomic) NSString iconName;
@property (nonatomic) NSString bundleName;
@property (nonatomic) BOOL hasSendMsg;
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) double height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasSendMsg;
- (void)setHasSendMsg:;
- (void)setModel:;
- (id)bundleName;
- (id)iconName;
- (id)model;
- (void)setBundleName:;
- (void).cxx_destruct;
- (id)title;
- (double)height;
- (void)setIconName:;
- (void)setTitle:;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
+ (id)imModelsFromShareModels:pageIdentifier:;
@end

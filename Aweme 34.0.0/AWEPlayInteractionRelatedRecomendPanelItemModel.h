@interface AWEPlayInteractionRelatedRecomendPanelItemModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString identifier;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)identifier;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)identifierForType:;
@end

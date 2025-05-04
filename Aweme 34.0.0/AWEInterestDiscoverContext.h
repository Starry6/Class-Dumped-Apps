@interface AWEInterestDiscoverContext : AWEPageContext
@property (nonatomic) AWEAwemeModel fromModel;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEListDataController dataController;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)fromModel;
- (void)setFromModel:;
- (id)enterFrom;
- (void)setDataController:;
- (void)updateContextWithAwemeModel:referString:enterFrom:dataController:;
- (void).cxx_destruct;
- (id)dataController;
@end

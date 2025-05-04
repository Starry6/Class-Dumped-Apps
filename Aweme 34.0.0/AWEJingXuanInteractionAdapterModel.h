@interface AWEJingXuanInteractionAdapterModel : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEAwemeModel model;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)enterFrom;
- (id)initAdapterModel:enterFrom:model:;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
@end

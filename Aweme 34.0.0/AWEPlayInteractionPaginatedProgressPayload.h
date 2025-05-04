@interface AWEPlayInteractionPaginatedProgressPayload : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEElementContainer container;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary logExtraDict;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setReferString:;
- (id)logExtraDict;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end

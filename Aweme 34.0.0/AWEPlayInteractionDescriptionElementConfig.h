@interface AWEPlayInteractionDescriptionElementConfig : NSObject
@property (nonatomic) NSMutableArray controllersMutArr;
@property (nonatomic) NSArray controllersArray;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (id)controllersArray;
- (id)controllersMutArr;
- (void)registerParserWithClassString:;
- (void)registerParsers;
- (void)setControllersArray:;
- (void)setControllersMutArr:;
- (void).cxx_destruct;
@end

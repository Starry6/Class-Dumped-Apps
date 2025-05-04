@interface AWEECMultiMallGeneralListManager : NSObject
@property (nonatomic) q maxLen;
@property (nonatomic) NSMutableDictionary mallListMap;
@property (nonatomic) NSMutableArray mallListList;
- (id)dequeueMallListVCForGeneralMall:tabIndex:forRecover:;
- (void)arrangeSelectedController:;
- (void)clearStashedGeneralMall;
- (id)mallListList;
- (id)mallListMap;
- (void)setMaxLen:;
- (void)setMallListMap:;
- (void)setMallListList:;
- (id)init;
- (void).cxx_destruct;
- (long long)maxLen;
@end

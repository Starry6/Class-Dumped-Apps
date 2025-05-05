@interface TKSmartCardATRInterfaceGroup : NSObject
@property (nonatomic) NSNumber TA;
@property (nonatomic) NSNumber TB;
@property (nonatomic) NSNumber TC;
@property (nonatomic) NSNumber protocol;
- (id)protocol;
- (id)initWithProtocol:;
- (void).cxx_destruct;
- (id)description;
- (id)TB;
- (id)TC;
- (id)TA;
- (id)parseWithY:toProtocol:fromSource:hasNext:;
@end

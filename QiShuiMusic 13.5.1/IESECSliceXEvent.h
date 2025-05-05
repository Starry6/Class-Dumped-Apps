@interface IESECSliceXEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary params;
@property (nonatomic) UIView activeView;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSDictionary originActionDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originActionDict;
- (void)setOriginActionDict:;
- (id)uniqueID;
- (void)setName:;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (id)name;
- (id)params;
- (id)activeView;
- (void)setActiveView:;
- (void)setParams:;
@end

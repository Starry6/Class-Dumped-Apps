@interface IESECListKitSharedData : NSObject
@property (nonatomic) NSMutableDictionary sharedDataDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSharedDataDict:;
- (id)sharedDataDict;
- (id)init;
- (void)setData:forKey:;
- (void).cxx_destruct;
- (id)getDataForKey:;
@end

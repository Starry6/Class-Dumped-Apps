@interface IESIMSaaSPinYinComponent : NSObject
@property (nonatomic) Q anyItemType;
@property (nonatomic) NSMutableArray items;
@property (nonatomic) NSString originalString;
@property (nonatomic) NSString pinYinString;
@property (nonatomic) NSString firstPinYinCharacterInEveryItem;
- (id)firstPinYinCharacterInEveryItem;
- (void)setAnyItemType:;
- (void)addCharacterItem:;
- (unsigned long long)anyItemType;
- (id)pinYinString;
- (void)setFirstPinYinCharacterInEveryItem:;
- (void)setPinYinString:;
- (id)originalString;
- (id)init;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (void)setOriginalString:;
+ (id)pinYinComponentWithType:;
@end

@interface AWEIMPinYinComponent : NSObject
@property (nonatomic) Q anyItemType;
@property (nonatomic) NSMutableArray items;
@property (nonatomic) NSString originalString;
@property (nonatomic) NSString pinYinString;
@property (nonatomic) NSString firstPinYinCharacterInEveryItem;
- (id)firstPinYinCharacterInEveryItem;
- (void)setAnyItemType:;
- (id)pinYinString;
- (void)addCharacterItem:;
- (unsigned long long)anyItemType;
- (void)setPinYinString:;
- (void)setFirstPinYinCharacterInEveryItem:;
- (id)init;
- (id)items;
- (void)setItems:;
- (id)originalString;
- (void).cxx_destruct;
- (void)setOriginalString:;
+ (id)pinYinComponentWithType:;
@end

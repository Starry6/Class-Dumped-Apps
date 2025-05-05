@interface ABUDislikeReason : NSObject
@property (nonatomic) NSString ID;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray subReasons;
@property (nonatomic) BOOL isSelected;
- (id)dislikeID;
- (id)initWithID:name:subReasons:;
- (id)subReasons;
- (id)ID;
- (id)initWithDictionary:error:;
- (BOOL)isMemberOfClass:;
- (BOOL)isSelected;
- (id)options;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (void)setIsSelected:;
- (id)name;
@end

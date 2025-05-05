@interface CSJDislikeWords : NSObject
@property (nonatomic) NSString dislikeID;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSArray options;
- (id)dislikeID;
- (void)setDislikeID:;
- (void)setOptions:;
- (void)setName:;
- (id)initWithDictionary:error:;
- (BOOL)isMemberOfClass:;
- (id)initWithCoder:;
- (BOOL)isSelected;
- (void)encodeWithCoder:;
- (id)options;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (void)setIsSelected:;
- (id)name;
@end

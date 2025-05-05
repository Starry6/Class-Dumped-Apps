@interface IESLiveLinkmicTagBaseItem : NSObject
@property (nonatomic) <IESLiveLinkmicTagCombined> tagCombined;
@property (nonatomic) Q category;
@property (nonatomic) Q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTagCombined:;
- (id)buildTagUI;
- (BOOL)isTagValid;
- (id)tagCombined;
- (void).cxx_destruct;
- (unsigned long long)category;
- (unsigned long long)priority;
@end

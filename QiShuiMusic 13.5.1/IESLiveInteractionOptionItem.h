@interface IESLiveInteractionOptionItem : NSObject
@property (nonatomic) q tag;
@property (nonatomic) NSString desc;
@property (nonatomic) BOOL selected;
- (BOOL)selected;
- (long long)tag;
- (id)init;
- (id)desc;
- (void)setDesc:;
- (void)setSelected:;
- (void)setTag:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end

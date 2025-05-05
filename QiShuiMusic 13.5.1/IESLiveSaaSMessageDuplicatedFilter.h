@interface IESLiveSaaSMessageDuplicatedFilter : NSObject
@property (nonatomic) BOOL disableFilter;
@property (nonatomic) NSInteger maxMessageCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)maxMessageCount;
- (BOOL)disableFilter;
- (BOOL)doFilter:;
- (void)setDisableFilter:;
- (void)setMaxMessageCount:;
- (id)init;
- (void).cxx_destruct;
@end

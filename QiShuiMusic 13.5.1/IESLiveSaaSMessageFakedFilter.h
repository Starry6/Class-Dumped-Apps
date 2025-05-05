@interface IESLiveSaaSMessageFakedFilter : NSObject
@property (nonatomic) NSInteger maxMessageCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)maxMessageCount;
- (BOOL)doFilter:;
- (BOOL)isMyMessageCompareWithUser:;
- (void)setMaxMessageCount:;
- (id)init;
@end

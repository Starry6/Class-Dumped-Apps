@interface AWEInteractionDislikeItemConfig : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) BOOL withUser;
@property (nonatomic) NSString serverAnchorExtra;
@property (nonatomic) Q buttonType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q methodType;
@property (nonatomic) BOOL shouldDelete;
@property (nonatomic) @? completionBlock;
- (void)setEnterFrom:;
- (id)aweme;
- (void)setAweme:;
- (id)enterFrom;
- (void)setMethodType:;
- (unsigned long long)methodType;
- (id)serverAnchorExtra;
- (void)setServerAnchorExtra:;
- (BOOL)withUser;
- (void)setWithUser:;
- (BOOL)shouldDelete;
- (void)setShouldDelete:;
- (unsigned long long)buttonType;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (void)setButtonType:;
@end

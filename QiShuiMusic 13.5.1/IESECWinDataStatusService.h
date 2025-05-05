@interface IESECWinDataStatusService : NSObject
@property (nonatomic) NSError tabError;
@property (nonatomic) Q status;
@property (nonatomic) BOOL finishRenderHeader;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)finishRenderHeader;
- (void)setFinishRenderHeader:;
- (void)setTabError:;
- (id)tabError;
- (void)setStatus:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (unsigned long long)status;
@end

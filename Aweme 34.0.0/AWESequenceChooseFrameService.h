@interface AWESequenceChooseFrameService : NSObject
@property (nonatomic) BOOL isSelectPicFrame;
@property (nonatomic) BOOL isSelectVideoFrame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSelectPicFrame;
- (BOOL)isSelectVideoFrame;
- (void)updateIsSelectPicFrame:;
- (void)updateIsSelectVideoFrame:;
- (void)setIsSelectPicFrame:;
- (void)setIsSelectVideoFrame:;
@end

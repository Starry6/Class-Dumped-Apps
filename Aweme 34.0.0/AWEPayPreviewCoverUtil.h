@interface AWEPayPreviewCoverUtil : NSObject
+ (void)startWithParams:;
+ (id)generateRedpacketViewWithCover:;
+ (void)generatePreviewInfo:cardConfig:withCover:;
+ (void)generateOpenResponse:withCover:;
@end

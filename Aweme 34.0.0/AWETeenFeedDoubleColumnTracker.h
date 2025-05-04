@interface AWETeenFeedDoubleColumnTracker : NSObject
+ (long long)squareContentTypeFromModel:;
+ (void)trackSquareLikeWithEnterFrom:groupID:authorID:squareContentType:reqCnt:showOrder:;
+ (void)trackSquareLikeCancelWithEnterFrom:groupID:authorID:squareContentType:reqCnt:showOrder:;
+ (id)squareContentStringFromModel:;
+ (void)trackSquareShowWithEnterFrom:groupID:authorID:squareContentType:reqCnt:showOrder:;
+ (void)trackSquareClickWithEnterFrom:groupID:authorID:squareContentType:reqCnt:showOrder:;
+ (id)statusFromIsSquare:;
+ (id)stringFromSquareContentType:;
+ (void)trackClickHomepageWithIsSquare:;
+ (void)trackSquareSwitchCapsuleShowWithIsSquare:;
+ (void)trackSquareSwitchCapsuleClickWithIsSquare:;
+ (void)trackSquareSwitchButtonShowWithIsSquare:;
+ (void)trackSquareSwitchButtonClickWithIsSquare:;
+ (void)trackEnterHomepageWithEnterMethod:;
+ (void)trackSquareStayTimeWithDuration:enterFrom:;
@end

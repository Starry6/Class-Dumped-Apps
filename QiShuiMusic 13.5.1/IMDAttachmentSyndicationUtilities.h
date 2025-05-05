@interface IMDAttachmentSyndicationUtilities : NSObject
+ (id)_syndicationIdentifierForAttachmentGUID:messageGUID:attributedBody:verbose:;
+ (BOOL)_attachmentGUIDIsSyndicatable:syndicationIdentifier:attachmentUTI:attributedBody:encodedSyndicationRanges:verbose:;
+ (unsigned long long)_attachmentSyndicationTypeForAttachmentGUID:syndicationIdentifier:attachmentUTI:attributedBody:encodedSyndicationRanges:isCommSafetySensitive:verbose:;
+ (unsigned long long)syndicationTypeForAttachmentRecord:verbose:;
+ (BOOL)attachmentRecordIsSyndicatable:verbose:;
@end
